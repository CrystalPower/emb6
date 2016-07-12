/*
 * thrd-n-sd.c
 *
 * Created on: 12 Jul 2016
 * Author: Lukas Zimmermann <lzimmer1@stud.hs-offenburg.de>
 *
 * CoAP Resource - Server Data Registration /n/sd.
 */

#include "emb6.h"
#include "bsp.h"
#include "er-coap.h"

#define DEBUG DEBUG_PRINT
#include "uip-debug.h"

/*
 ********************************************************************************
 *                          LOCAL FUNCTION DECLARATIONS
 ********************************************************************************
 */

static void res_post_handler(void *request, void *response, uint8_t *buffer,
		uint16_t preferred_size, int32_t *offset);

/*
 ********************************************************************************
 *                               LOCAL VARIABLES
 ********************************************************************************
 */

static uint8_t payload_buf[16] = { 0 };
static size_t len = 0;						// CoAP payload length.

/**
 * Server Data Registration CoAP Resource (/n/sd).
 */
RESOURCE(thrd_res_n_sd,
         "title=\"Server Data Registration: POST\";rt=\"Text\"",
         NULL,
         res_post_handler,
         NULL,
         NULL);

/*
 ********************************************************************************
 *                               GLOBAL VARIABLES
 ********************************************************************************
 */

/*
 ********************************************************************************
 *                           LOCAL FUNCTION DEFINITIONS
 ********************************************************************************
 */

static void
res_post_handler(void *request, void *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset)
{
	const uint8_t *chunk;
	PRINTF("========================== CoAP ==========================\n");
	PRINTF("Receiving CoAP packet! (Res: n/sd)\n");


	PRINTF("==========================================================\n");
}

/* --------------------------------------------------------------------------- */


