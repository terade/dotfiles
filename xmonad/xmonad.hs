import XMonad hiding ((|||))
import XMonad.Core
import System.IO
import XMonad.Layout hiding ((|||))
import XMonad.Layout.BinarySpacePartition
import XMonad.Layout.NoBorders
import XMonad.Layout.Fullscreen
import XMonad.Layout.MultiToggle 
import XMonad.Layout.MultiToggle.Instances 
import qualified Data.Map as M
import qualified XMonad.StackSet as W
import XMonad.Util.EZConfig(additionalKeysP)
import XMonad.Config.Desktop
import XMonad.Hooks.DynamicLog
import XMonad.Util.WorkspaceCompare
import XMonad.Util.Loggers
import XMonad.Actions.GridSelect
import XMonad.Layout.LayoutCombinators  
import XMonad.Layout.ResizableTile
import XMonad.Actions.CycleWS
import XMonad.Util.NamedScratchpad
import XMonad.Actions.CopyWindow
import XMonad.Actions.DynamicWorkspaces
import XMonad.Prompt
import XMonad.Actions.CycleWS
import XMonad.Layout.Spacing
import XMonad.Layout.Tabbed


-- myLayouts = emptyBSP ||| Mirror emptyBSP ||| noBorders Full
--myLayouts = spacingRaw True border True border True $ smartBorders $  noBorders Full ||| Tall 1 (3/100) (1/2) ||| Mirror (Tall 1 (3/100) (1/2)) ||| emptyBSP ||| simpleTabbed
myLayouts = smartBorders $ spacingRaw True border True border True $  noBorders Full ||| Tall 1 (3/100) (1/2) ||| Mirror (Tall 1 (3/100) (1/2)) ||| emptyBSP 
  where border = Border size size size size
        size = 7
myTerminal = "kitty"
myEditor = "emacs"
--myFocusedBorderColor = "#330066"  -- #400080
--myFocusedBorderColor = "#940000" 
--myFocusedBorderColor = "#ff0000" 
myFocusedBorderColor = "blue" 
--myNormalBorderColor = "#1e8000"
--myNormalBorderColor = "#0d0d0d"
myNormalBorderColor = "black"
--myBorderWidth = 2
myBorderWidth = 0
wallpaperDir = "~/Pictures/Wallpaper/*"
statusBarCmd = "xmobar ~/.xmobarrc"
--statusBarCmd = "dzen2"
myWorkspaces = ["1 general","2 emacs"] ++ map show [3..11]

setWallpaper = spawn $ "feh --randomize --bg-fill " ++ wallpaperDir

startup = do
  spawn "picom"
  spawn "conky"
  setWallpaper

myKeys = 
   [ ("C-j e",  spawn myEditor),
     ("C-j u",  spawn myTerminal),
     ("C-j C-u",  spawn myTerminal),
     --("C-j p",  spawn "dmenu_run"),
     ("C-j p",  spawn "rofi -show run"),
     ("C-j ,",  spawn "firejail qutebrowser"),
     ("C-j y",  spawn "firejail firefox"),
     ("C-j v",  spawn "torbrowser-launcher"),
     ("C-j <Space>", sendMessage NextLayout),
     ("C-j q", kill),
     ("C-j j", windows W.focusDown),
     ("C-j k", windows W.focusUp),
     ("C-j C-k", windows W.focusUp),
     ("C-j f", sendMessage $ JumpToLayout "Full"),
     ("C-j l", goToSelected def),  -- gridselect
     ("C-j C-l", goToSelected def),  -- gridselect
     ("C-j h", spawnSelected def ["emacs","qutebrowser","firefox","tor-browser","kitty","kitty -e cmus","kitty -e htop","krita","gimp","vlc"]),
     ("C-j i", gridselectWorkspace def W.view),
     ("C-j w", bringSelected def),
     ("C-j o", nextScreen),
     ("C-j g", appendWorkspacePrompt def),
     ("C-j r", removeEmptyWorkspace),
     ("C-j ;", toggleWS),
     ("C-j C-;", toggleWS),
     ("C-j c", raiseScratchpad "kittysp"),
     ("C-j C-c", raiseScratchpad "kittysp"),
     ("C-j m", raiseScratchpad "cmussp"),
     ("C-j x", runSelectedAction def gridScratchpads),
     ("C-j C-x", runSelectedAction def gridScratchpads),
     ("C-j a", runSelectedAction def gridLayouts),
     ("C-j C-a", runSelectedAction def gridLayouts),
     ("C-j d", toggleCopyToAll),
     ("C-j s", runSelectedAction def gridVarious),
     ("C-j C-o", swapNextScreen),
     ("C-j \\", spawn "i3lock"),
     ("M-i", sendMessage $ MirrorExpand),
     ("M-n ", sendMessage $ MirrorShrink),
     ("C-0", sendMessage $ ExpandTowards R),
     ("C-7", sendMessage $ ExpandTowards L),
     ("C-8", sendMessage $ ExpandTowards D),
     ("C-9", sendMessage $ ExpandTowards U),
     ("C-/", sendMessage $ Rotate),
     ("C-'", sendMessage $ Swap),
     ("M--", sendMessage $ FocusParent),
     ("C-j r", spawn "xmonad")
   ]
  where raiseScratchpad = namedScratchpadAction scratchpads
        toggleCopyToAll = wsContainingCopies >>= \ws -> case ws of
                                                          [] -> windows copyToAll
                                                          _ -> killAllOtherCopies
        gridScratchpads = [("kitty", raiseScratchpad "kittysp"),("cmus",raiseScratchpad "cmussp")]
        gridLayouts = map toGridLayout ["Tall","Full","Mirror Tall","BSP"]
          where toGridLayout x = (x,sendMessage $ JumpToLayout x)
        gridVarious = [("randomWallpaper", setWallpaper),("Balance",sendMessage Balance),("Equalize",sendMessage Equalize)]


-- Key binding to toggle the gap for the bar.
toggleStrutsKey XConfig {XMonad.modMask = modMask} = (modMask, xK_b)

scratchpads = [
  NS "kittysp" (myTerminal ++ " --class kittysp")  (className =? "kittysp") termFloating,
  NS "cmussp" (myTerminal ++ " --class cmussp -e cmus") (className =? "cmussp") cmusFloating
              ]
  where myFloating = customFloating $ W.RationalRect l t w h
          where h = 0.9            -- height
                w = 0.9            -- width
                t = 0.95 - h       -- x
                l = 0.95 - w       -- y
        termFloating = customFloating $ W.RationalRect l t w h
          where h = 0.9
                w = 0.9
                t = 0.95 - h
                l = 0.95 - w
        cmusFloating = customFloating $ W.RationalRect l t w h
          where h = 0.9
                w = 0.9
                t = 0.95 - h
                l = 0.95 - w
          

myManageHook = composeAll
  [ className =? "tor-browser" --> doFloat
  ] <+> namedScratchpadManageHook scratchpads

myConfig = def
           {
             terminal = myTerminal,
             focusedBorderColor = myFocusedBorderColor,
             borderWidth = myBorderWidth,
             startupHook = startup,
             layoutHook =  myLayouts,
             workspaces = myWorkspaces,
             manageHook = myManageHook <+> manageHook def
           } `additionalKeysP` myKeys
  

main = xmonad =<< statusBar statusBarCmd def toggleStrutsKey myConfig 


-- https://github.com/altercation/dotfiles-tilingwm/blob/master/.xmonad/xmonad.hs
-- https://wiki.haskell.org/Xmonad/General_xmonad.hs_config_tips
-- https://hackage.haskell.org/package/xmonad-contrib-0.13/docs/XMonad-Doc-Extending.html
-- https://wiki.haskell.org/Xmonad/Config_archive
-- https://hackage.haskell.org/package/xmonad-contrib-0.13/docs/XMonad-Hooks-DynamicLog.html statusbar
-- https://github.com/karetsu/xmonad-aloysius
-- https://gitlab.com/dwt1/dotfiles/tree/master/.xmonad/ namedscratchpad
-- https://hackage.haskell.org/package/xmonad-contrib-0.13/docs/

--https://github.com/Towerism/dotfiles
--https://betweentwocommits.com/blog/xmonad-layouts-guide
--XMonad.Actions.Navigation2D
