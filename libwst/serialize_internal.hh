// Copyright notice
// ================
//
// Copyright (C) 2010
//     Lorenzo Martignoni <martignlo@gmail.com>
//     Roberto Paleari <roberto.paleari@gmail.com>
//
// This program is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation; either version 3 of the License, or (at your option) any later
// version.  
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// this program; if not, write to the Free Software Foundation, Inc., 51
// Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.

#ifndef __SERIALIZE_INTERNEL_H__
#define __SERIALIZE_INTERNEL_H__

#include "type_winxp.hh"
#include "syscall.hh"

typedef enum _obj_allocation_t {
  NOALLOCATION = 0,
  TRACKED_ALLOCATION,
  UNTRACKED_ALLOCATION,
  FIXED_ALLOCATION,
} obj_allocation_t;

#endif
