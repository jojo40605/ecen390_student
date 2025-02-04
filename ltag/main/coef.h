#ifndef COEF_H_
#define COEF_H_

#define FIR_B_COEFS 81

extern const float fir_b[FIR_B_COEFS];

#define IIR_FILTERS 10
#define IIR_SOS_SECTS 3
#define IIR_SOS_COEFS 5

extern const float iir_sos[IIR_FILTERS][IIR_SOS_SECTS][IIR_SOS_COEFS];

#endif // COEF_H_
