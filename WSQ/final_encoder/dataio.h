extern int putc_ushort(unsigned short, unsigned char *, const int, int *);
extern int putc_uint(unsigned int, unsigned char *, const int, int *);
extern int putc_byte(const unsigned char, unsigned char *, const int, int *);
extern int putc_bytes(unsigned char *, const int, unsigned char *,const int, int *);
extern void write_bits(unsigned char **outbuf,const unsigned short code,const short size,int *outbit,unsigned char *bits,int *bytes);
extern void flush_bits(unsigned char **outbuf,int *outbit,unsigned char *bits,int *bytes);
extern int getc_byte(unsigned char *, unsigned char **, unsigned char *);
extern int getc_bytes(unsigned char **, const int, unsigned char **, unsigned char *);
extern int getc_ushort(unsigned short *, unsigned char **, unsigned char *);
extern int getc_uint(unsigned int *, unsigned char **, unsigned char *);
