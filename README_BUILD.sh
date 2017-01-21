# https://www.chromium.org/developers/how-tos/get-the-code
# https://www.chromium.org/developers/how-tos/api-keys
#
# On mac, Check below page.
# https://chromium.googlesource.com/chromium/src/+/master/docs/mac_build_instructions.md
# On Windows, Check below page.
# https://chromium.googlesource.com/chromium/src/+/master/docs/windows_build_instructions.md
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
# fetch blink     # Removed! Chromium code with Blink checked out to tip-of-tree
# fetch android   # Chromium checkout for Android platform
# fetch ios
fetch chromium
gclient sync
cd src
# Setting up the build.
gn gen out/Default
# Replace out/Default/args.gn before build.
ninja -C out/Default chrome
# Creates installer. Use mini_installer on Windows.
./build_app_dmg
# Updates chromium source code.
git rebase-update
gclient sync
# Run following command after changing code.
gclient runhook
