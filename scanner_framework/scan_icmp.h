
#ifndef _SCAN_ICMP_H__
#define _SCAN_ICMP_H__

#ifndef _STRING_

#include <string>

using std::string;

#endif

#ifndef _VECTOR_

#include <vector>

using std::vector;

#endif

#define ICMP_PING_LOOP_COUNT 4
#define ICMP_PING_TIMEOUT 5000

typedef vector<string> tracert_list;
typedef struct {
    unsigned int count;
    unsigned int lost;
    unsigned int delay;
} reply;

typedef struct {
    string ip;
    reply  ping_reply;
} reply_ip;
typedef vector<reply_ip> ping_list;

bool         scan_icmp_init(void);
bool         scan_icmp(const char* target_ip,reply* output_information);
ping_list    scan_icmp_list(const char* target_network,unsigned long target_network_subnet);
tracert_list scan_icmp_tracert(const char* target_ip);
void         scan_icmp_clean(void);

#endif
