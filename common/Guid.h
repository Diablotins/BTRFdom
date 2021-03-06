/*
 * BTRFdom - Rappelz BTRF Document Object Model
 * By Glandu2/Ldxngx
 * Copyright 2013 Ldxngx
 *
 * This file is part of BTRFdom.
 * BTRFdom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * BTRFdom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with BTRFdom.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GUID_H
#define GUID_H

typedef union {
	struct {
		unsigned int  Data1;
		unsigned short Data2;
		unsigned short Data3;
		unsigned char  Data4[ 8 ];
	};
	unsigned int rawData[4];
} Guid;

inline bool operator==(const Guid& guidOne, const Guid& guidOther)
	{ return
			(guidOne.rawData[0] == guidOther.rawData[0]) &&
			(guidOne.rawData[1] == guidOther.rawData[1]) &&
			(guidOne.rawData[2] == guidOther.rawData[2]) &&
			(guidOne.rawData[3] == guidOther.rawData[3]);
	}
inline bool operator!=(const Guid& g1, const Guid& g2)
	{ return !(g1 == g2); }

#endif // GUID_H
