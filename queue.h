
/*******************************************************************************************************
* NAME:                                                                     
*                                                                                                       
* PURPOSE:                                                                      
*                                                                                                       
* GLOBAL VARIABLES: None                                                                                
*                                                                                                       
*                                                                                                       
* DEVELOPMENT HISTORY:                                                                                  
*                                                                                                       
* Date          Author          Change Id       Release         Description Of Change                   
* ----------    --------------- ---------       -------         -----------------------------------     
* 14-01-2025    Tiago Rodrigues                       1         File preparation     
* 14-01-2025    Tiago Rodrigues                       1         Added prototype functions                                                                                                       
* 23-01-2025    Tiago Rodrigues                       1         Further changed queue prototypes                                                                                                      
*******************************************************************************************************/
#ifndef QUEUE_H
#define QUEUE_H

/* 0 copyright/licensing */
/**********************************************************************
*
* 2025 Tiago Filipe Rodrigues tiagorodrigues1590@hotmail.com
*
***********************************************************************/

#ifdef __cplusplus
extern "C" {
#endif



/* 1 includes */
/*****************************************************/
#include <stdint.h>

/*****************************************************/

/* 2 defines */
/*****************************************************/

/*****************************************************/

/* 3 external declarations */
/*****************************************************/

/*****************************************************/

/* 4 typedefs */
/*****************************************************/

/*****************************************************/

/* 5 global variable declarations */
/*****************************************************/


/*****************************************************/


/* 6 function prototypes */
/*****************************************************/


/******************************************************************
*
* FUNCTION NAME:        
*
*
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* --------	-------------	---	--------------------------
* 
*
* RETURNS:
*
*
*
*****************************************************************/
void create_queue(void** id_of_queue, uint64_t size_of_datatype, uint64_t elements_to_allocate);



/******************************************************************
*
* FUNCTION NAME:        
*
*
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* --------	-------------	---	--------------------------
* 
*
* RETURNS:
*
*
*
*****************************************************************/
void* check_queue_front(void* id_of_queue);




/******************************************************************
*
* FUNCTION NAME:        
*
*
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* --------	-------------	---	--------------------------
* 
*
* RETURNS:
*
*
*
*****************************************************************/
void* check_queue_back(void* id_of_queue);


/******************************************************************
*
* FUNCTION NAME:        
*
*
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* --------	-------------	---	--------------------------
* 
*
* RETURNS:
*
*
*
*****************************************************************/
void queue_pop(void* id_of_queue);


/******************************************************************
*
* FUNCTION NAME:        
*
*
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* --------	-------------	---	--------------------------
* 
*
* RETURNS:
*
*
*
*****************************************************************/
void queue_push(void* id_of_queue, void* data_to_push);


/******************************************************************
*
* FUNCTION NAME:        
*
*
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* --------	-------------	---	--------------------------
* 
*
* RETURNS:
*
*
*
*****************************************************************/
uint8_t check_queue_is_empty(void* id_of_queue);



/******************************************************************
*
* FUNCTION NAME:        
*
*
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* --------	-------------	---	--------------------------
* 
*
* RETURNS:
*
*
*
*****************************************************************/
uint64_t check_queue_size(void* id_of_queue);



/******************************************************************
*
* FUNCTION NAME:        
*
*
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* --------	-------------	---	--------------------------
* 
*
* RETURNS:
*
*
*
*****************************************************************/
void free_queue(void* id_of_queue);





#ifdef __cplusplus
}
#endif


#endif

























