/*
	Audio File Library
	Copyright (C) 2000, Silicon Graphics, Inc.
	Copyright (C) 2010, Michael Pruett <michael@68k.org>

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the
	Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
	Boston, MA  02110-1301  USA
*/

/*
	g711.h
*/

#ifndef MODULES_G711_H
#define MODULES_G711_H

#include "afinternal.h"
#include "audiofile.h"

class File;
class FileModule;
struct AudioFormat;
struct Track;

bool _af_g711_format_ok (AudioFormat *f);

FileModule *_AFg711initcompress (Track *, File *, bool canSeek,
	bool headerless, AFframecount *chunkframes);

FileModule *_AFg711initdecompress (Track *, File *, bool canSeek,
	bool headerless, AFframecount *chunkframes);

#endif /* MODULES_G711_H */
