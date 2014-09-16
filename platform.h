/*
 * Copyright 2012 Alan Burlison, alan@bleaklow.com.  All rights reserved.
 * Use is subject to license terms.  See LICENSE.txt for details.
 */

/*
 * Platform management.
 */

#ifndef platform_h
#define	platform_h

/*
 * Initialise the platform - set clock prescaler, disable watchdog,
 * enable interrupts etc.
 */

extern void init(void);


#endif	/* platform_h */

