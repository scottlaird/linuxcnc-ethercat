//
//    Copyright (C) 2011 Sascha Ittner <sascha.ittner@modusoft.de>
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
//
//    Edit A.Chimeno 14/06/19 Rev 2.0

#ifndef _LCEC_EL3403_H_
#define _LCEC_EL3403_H_

#include "lcec.h"

#define LCEC_EL3403_VID LCEC_BECKHOFF_VID

#define LCEC_EL3403_PID 0x0d4b3052

#define LCEC_EL3403_CHANS 3
                         
#define LCEC_EL3403_PDOS 29

int lcec_el3403_init(int comp_id, struct lcec_slave *slave, ec_pdo_entry_reg_t *pdo_entry_regs);

#endif
