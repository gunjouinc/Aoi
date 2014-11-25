# Gets depot_tools.
git clone https://chromium.googlesource.com/chromium/tools/depot_tools
export PATH=$PATH:/path_to_parent_dir/depot_tools
# Configures git.
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
git config --global core.autocrlf false
git config --global core.filemode false
git config --global color.ui true
# --- Fetches chromium ---
# fetch chromium  # Basic checkout for desktop Chromium
# fetch blink     # Chromium code with Blink checked out to tip-of-tree
# fetch android   # Chromium checkout for Android platform
# fetch ios
fetch chromium
gclient sync
cd src
# Makes branch Aoi.
git new-branch Aoi
ninja -C out/Debug chrome
ninja -C out/Release chrome
ninja -C out/Release build_app_dmg
# Updates chromium source code.
git rebase-update
gclient sync