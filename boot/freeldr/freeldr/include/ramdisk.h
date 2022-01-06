/*
 * PROJECT:         ReactOS Boot Loader
 * LICENSE:         BSD - See COPYING.ARM in the top level directory
 * FILE:            boot/freeldr/freeldr/include/ramdisk.h
 * PURPOSE:         Header file for ramdisk support
 * PROGRAMMERS:     ReactOS Portable Systems Group
 */

#pragma once

//
// Ramdisk Routines
//
ARC_STATUS
RamDiskLoadVirtualFile(
    IN PCSTR FileName,
    IN PCSTR DefaultPath OPTIONAL);

VOID
RamDiskInitialize(VOID);

extern PVOID gRamDiskBase;
extern ULONG gRamDiskSize;
