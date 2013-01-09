#ifndef CHECK_BACKEND_H
#define CHECK_BACKEND_H

#ifndef TIMEOUT_TESTS_ENABLED
#define TIMEOUT_TESTS_ENABLED 0
#endif

TCase * make_ptree_tc (void);
TCase * make_ptable_tc (void);
TCase * make_tbchain_tc (void);
TCase * make_mhash_tc (void);

#endif /* CHECK_COMMON_H */

