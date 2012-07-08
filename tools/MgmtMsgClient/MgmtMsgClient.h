/** 
 * @file        MgmtMsgClient.h
 * @author      Tomasz Kleinschmidt
 *
 * @brief       Debugging messages printing definitions
 */

#ifndef MGMTMSGCLIENT_H
#define	MGMTMSGCLIENT_H

extern int verbose_flag;

#define DBG(...) \
        do { if (verbose_flag) fprintf(stderr, __VA_ARGS__); } while (0)

#endif	/* MGMTMSGCLIENT_H */

