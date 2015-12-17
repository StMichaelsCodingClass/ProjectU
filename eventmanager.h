#ifndef EVENTMANAGER_HEADER
#define EVENTMANAGER_HEADER

#include "event.h"
#include "eventlistener.h"

void queueEvent(Event);

void addEventListener(EventListener*);

void dispatchEvents();


#endif
