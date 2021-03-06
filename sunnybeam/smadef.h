/**************************************************************************
*         S M A Technologie AG, 34266 Niestetal
***************************************************************************
*
*  Include SMADEF.H defines basic data types used by SMA software
*
***************************************************************************
*  PREFIX : -
***************************************************************************
*  STATUS : rfc
***************************************************************************
*  REMARKS: MUST be used for all new files
***************************************************************************
*
*  HISTORY:
*
*  XXX DD.MM.JJ DESCRIPTION
*  ------------------------------------------------------------------------
*  CA  09.04.98 Created
*  CA  27.04.98 change define from _SMADEFINES to _SMADEFINE_98 to seperate
*               from old smadefs.h
*
***************************************************************************
*
*  TODO: -
*
***************************************************************************/


#ifndef _SMADEF_H
#define	_SMADEF_H

#ifdef	__cplusplus
extern "C" {
#endif



/**************************************************************************
* C O N S T A N T S / D E F I N E S
***************************************************************************/

/* Globale Konstanten ****************************************************/

#ifndef TRUE
#define TRUE      (1 == 1)
#define FALSE     (1 == 0)
#endif

#ifndef false
#define false FALSE
#endif

#ifndef true
#define true TRUE
#endif

/* Typen *****************************************************************/
#include <stdint.h>
#include <inttypes.h>

typedef uint32_t           BIT;        /* Prefix bit */
typedef int8_t             CHAR;       /* Prefix c */
typedef uint8_t            BYTE;       /* Prefix b */
typedef int16_t            SHORT;      /* Prefix s */
typedef uint16_t           WORD;       /* Prefix w */
typedef int32_t            LONG;       /* Prefix l */
typedef uint32_t           DWORD;      /* Prefix d */
#define PRDWORD_X          PRIX32
#define PRDWORD_x          PRIx32
#define PRDWORD_d          PRId32
typedef float              FLOAT;      /* Prefix f */
typedef double             DOUBLE;     /* Prefix dbl */

/*typedef void*              XPOINT;*/

#ifndef NO_SMA_BOOL
#ifndef BOOL
typedef int BOOL;
#endif
#endif

/**************************************************************************
* M A C R O  D E F I N I T I O N S
***************************************************************************/

/**************************************************************************
* Mark not used variables -> eliminates compiler warning
***************************************************************************/
#define UNUSED_VAR(var)  (var) = (var)


#ifdef	__cplusplus
}
#endif

#endif	/* _SMADEF_H */

