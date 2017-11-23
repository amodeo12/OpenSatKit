/*================================================================================*
** File:  ut_osloader_test.h
** Owner: Tam Ngo
** Date:  May 2013
**================================================================================*/

#ifndef _UT_OSLOADER_TEST_H_
#define _UT_OSLOADER_TEST_H_

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#include "ut_os_stubs.h"
#include "ut_osloader_symtable_test.h"
#include "ut_osloader_module_test.h"

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

#define UT_OS_LOG_FILENAME  "ut_osloader_log.txt"

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Function prototypes
**--------------------------------------------------------------------------------*/

#ifdef _ARINC653_OS_
void UT_main(void);
#endif  /* _ARINC653_OS_ */

/*--------------------------------------------------------------------------------*/

#endif  /* _UT_OSLOADER_TEST_H_ */

/*================================================================================*
** End of File: ut_osloader_test.h
**================================================================================*/