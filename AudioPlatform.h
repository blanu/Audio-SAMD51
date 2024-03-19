#ifndef _AUDIOPLATFORM_H_
#define _AUDIOPLATFORM_H_

#include "Arduino.h"
#include "AudioStream.h"
#include "arm_math.h"
#include "SPI.h"

#define DELAY_QUEUE_SIZE  (176512 / AUDIO_BLOCK_SAMPLES)
#define MAX_BUFFERS 53

#define digitalWriteFast digitalWrite

#endif
