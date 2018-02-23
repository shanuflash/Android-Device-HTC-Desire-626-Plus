#include <openssl/ssl.h>
#include <malloc.h>

extern "C"{
void CRYPTO_free(void *str) {
    free(str);
}

void *CRYPTO_malloc(int num, const char *file, int line) {
    return malloc(num);
}

void CRYPTO_lock(int mode, int type, const char *file, int line) {
    CRYPTO_lock(mode, type, file, line);
}

void SSLv2_client_method() { }

void SSL_CTX_callback_ctrl() { }

void SSL_CTX_ctrl() { }

void ENGINE_ctrl() { }

void ENGINE_ctrl_cmd() { }

void UI_OpenSSL() { }

void ENGINE_load_private_key() { }

void SSL_ctrl() { }

void OPENSSL_add_all_algorithms_noconf() { }

void ENGINE_cleanup() { }

void ENGINE_get_first() { }

void ENGINE_get_id() { }

void ENGINE_get_next() { }

void ENGINE_finish() { }

void ENGINE_init() { }

void ENGINE_set_default() { }
}
