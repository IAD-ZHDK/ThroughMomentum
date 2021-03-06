#ifndef PIR_H
#define PIR_H

#include <stdbool.h>

/**
 * The PIR callback.
 *
 * @param m The motion from 0 to ~400.
 */
typedef void (*pir_callback_t)(int m);

/**
 * Initialize PIR sensor.
 *
 * @param cb The PIR callback.
 */
void pir_init(pir_callback_t cb);

#endif  // PIR_H
