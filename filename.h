#ifndef FILENAME_H
#define FILENAME_H

#ifdef __cplusplus
extern "C" {
#endif

/* If you came here and notice a problem with the header not using
 * restrict, but the source using it, tell me.
 */

extern void cpm_to_host(char *dst, char const * src, size_t capacity);
extern void host_to_cpm(char *dst, char const * src, size_t capacity);
extern char const *mybasename(char const *name);

#ifdef __cplusplus
}
#endif

#endif
