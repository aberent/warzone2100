/*
	This file is part of Warzone 2100.
	Copyright (C) 1999-2004  Eidos Interactive
	Copyright (C) 2005-2007  Warzone Resurrection Project

	Warzone 2100 is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Warzone 2100 is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Warzone 2100; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/
/***************************************************************************/
/*
 * piefunc.h
 *
 * type defines for extended image library functions.
 *
 */
/***************************************************************************/

#ifndef _piefunc_h
#define _piefunc_h

/***************************************************************************/

#include "lib/framework/frame.h"




/***************************************************************************/
/*
 *	Global Definitions
 */
/***************************************************************************/

/***************************************************************************/
/*
 *	Global Variables
 */
/***************************************************************************/

/***************************************************************************/
/*
 *	Global ProtoTypes
 */
/***************************************************************************/
extern void pie_DownLoadBufferToScreen(void *srcData, UDWORD destX, UDWORD
							destY,UDWORD srcWidth,UDWORD srcHeight,UDWORD srcStride);
extern void pie_RectFilter(SDWORD x0, SDWORD y0, SDWORD x1, SDWORD y1, UDWORD colour);
extern void pie_DrawBoundingDisc(iIMDShape *shape, int pieFlag);
extern void pie_Blit(SDWORD texPage, SDWORD x0, SDWORD y0, SDWORD x1, SDWORD y1);
extern void pie_Sky(SDWORD texPage, PIEVERTEX* aSky );
extern void pie_Water(SDWORD texPage, SDWORD x0, SDWORD y0, SDWORD x1, SDWORD y1, SDWORD height, SDWORD translucency);
extern void pie_InitMaths(void);
extern UBYTE pie_ByteScale(UBYTE a, UBYTE b);
extern void	pie_CornerBox(SDWORD x0, SDWORD y0, SDWORD x1, SDWORD y1, UDWORD colour,
					  UBYTE a, UBYTE b, UBYTE c, UBYTE d);
extern void	pie_TransColouredTriangle(PIEVERTEX *vrt, UDWORD rgb, UDWORD trans);
extern void pie_DrawSkybox(iView player, iView camera, float rotation, int texpage, int u, int v, int w, int h);
extern void	pie_DrawViewingWindow( iVector *v, UDWORD x1, UDWORD y1, UDWORD x2, UDWORD y2,UDWORD colour);

#endif // _piedef_h
