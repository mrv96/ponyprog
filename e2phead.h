//=========================================================================//
//                                                                         //
//  PonyProg - Serial Device Programmer                                    //
//                                                                         //
//  Copyright (C) 1997-2007   Claudio Lanconelli                           //
//                                                                         //
//  http://ponyprog.sourceforge.net                                        //
//                                                                         //
//-------------------------------------------------------------------------//
// $Id$
//-------------------------------------------------------------------------//
//                                                                         //
// This program is free software; you can redistribute it and/or           //
// modify it under the terms of the GNU  General Public License            //
// as published by the Free Software Foundation; either version2 of        //
// the License, or (at your option) any later version.                     //
//                                                                         //
// This program is distributed in the hope that it will be useful,         //
// but WITHOUT ANY WARRANTY; without even the implied warranty of          //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU       //
// General Public License for more details.                                //
//                                                                         //
// You should have received a copy of the GNU  General Public License      //
// along with this program (see COPYING);     if not, write to the         //
// Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA. //
//                                                                         //
//-------------------------------------------------------------------------//
//=========================================================================//
// Header structure for .E2P files

#ifndef	_E2PHEAD_H
#define	_EP2HEAD_H

#define	E2P_ID_SIZE	8
#define	E2P_STRID_SIZE	28
#define	E2P_COMM_SIZE	86

#define	E2P_FVERSION	0x02

// Header dei file
struct e2pHeader {
	char fileID[E2P_ID_SIZE];
	UBYTE e2pFuseBits;
	UBYTE e2pLockBits;
	ULONG e2pType;
	long e2pSize;
	UBYTE flags;		//rollOver, splitted
	UWORD e2pExtFuseBits;
	UWORD e2pExtLockBits;
	UBYTE fversion;	//file version
	UWORD split_size_Low;	//used by splitted devices
	char e2pStringID[E2P_STRID_SIZE];
	ULONG e2pProgBits;
	char e2pComment[E2P_COMM_SIZE];
	UWORD split_size_High;
	UWORD pad;
	UWORD e2pCrc;
	UWORD headCrc;
} PACK;

#endif
