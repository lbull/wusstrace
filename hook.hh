// Copyright notice
// ================
//
// Copyright (C) 2011
//     Lorenzo Martignoni <martignlo@gmail.com>
//     Roberto Paleari <roberto.paleari@gmail.com>
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 3 of the License, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
// more details.
//
// You should have received a copy of the GNU General Public License along with
// this program; if not, write to the Free Software Foundation, Inc., 51
// Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.

#ifndef __HOOK_HH__
#define __HOOK_HH__

// syscall_hook_internal() is decleared as 'extern "C"', because it is called
// from hook-asm.S
extern "C" uint32_t syscall_hook_internal(uint32_t orig_esp, uint32_t orig_eax, uint32_t retaddr, uint32_t tid);

#endif	// __HOOK_H__
