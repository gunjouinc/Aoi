// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/installer/mini_installer/mini_installer_constants.h"

namespace mini_installer {

// Various filenames and prefixes.
// The target name of the installer extracted from resources.
const wchar_t kSetupExe[] = L"setup.exe";
// The prefix of the chrome archive resource.
const wchar_t kChromeArchivePrefix[] = L"chrome";
// The prefix of the installer resource.
const wchar_t kSetupPrefix[] = L"setup";

// Command line switch names for setup.exe.
const wchar_t kCmdInstallArchive[] = L"install-archive";
const wchar_t kCmdUpdateSetupExe[] = L"update-setup-exe";
const wchar_t kCmdNewSetupExe[] = L"new-setup-exe";

// Temp directory prefix that this process creates.
const wchar_t kTempPrefix[] = L"CR_";
// ap value suffix to force subsequent updates to use the full rather than
// differential updater.
const wchar_t kFullInstallerSuffix[] = L"-full";
// ap value tag for a multi-install product.
const wchar_t kMultiInstallTag[] = L"-multi";

// The resource types that would be unpacked from the mini installer.
// Uncompressed binary.
const wchar_t kBinResourceType[] = L"BN";
// LZ compressed binary.
const wchar_t kLZCResourceType[] = L"BL";
// 7zip archive.
const wchar_t kLZMAResourceType[] = L"B7";

// Registry value names.
// The name of an app's Client State registry value that holds its tag/channel.
const wchar_t kApRegistryValue[] = L"ap";
// The name of the value in kCleanupRegistryKey that tells the installer not to
// delete extracted files.
const wchar_t kCleanupRegistryValue[] = L"ChromeInstallerCleanup";
// The name of an app's Client State registry value that holds the path to its
// uninstaller.
const wchar_t kUninstallRegistryValue[] = L"UninstallString";

// Registry key paths.
#if defined(GOOGLE_CHROME_BUILD)
// The path to the key containing each app's Client State registry key.
const wchar_t kClientStateKeyBase[] =
    L"Software\\Google\\Update\\ClientState\\";
// The path to the key in which kCleanupRegistryValue is found.
const wchar_t kCleanupRegistryKey[] =
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Google Chrome";
#else
// The path to the key containing each app's Client State registry key.
const wchar_t kClientStateKeyBase[] = L"Software\\Chromium";
// The path to the key in which kCleanupRegistryValue is found.
const wchar_t kCleanupRegistryKey[] = L"Software\\Chromium";
#endif

// One gigabyte is the biggest resource size that it can handle.
const size_t kMaxResourceSize = 1024*1024*1024;

}  // namespace mini_installer