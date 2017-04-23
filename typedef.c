
typedef enum {
  KEY_CAP_CAN_ENCRYPT,
  KEY_CAP_CAN_SIGN,
  KEY_CAP_CAN_CERTIFY
} key_cap_t;

typedef union {
  struct timeval timeval;
  unsigned int uidvalidity;
} validate;

union {
  unsigned char charval[16];
  unsigned int intval;
} digest;

typedef union {
  unsigned char c[64];
  uint32_t l[16];
} CHAR64LONG16;


