/*
 * File: cint1e.h
 * Author: Qiming Sun <osirpt.sun@gmail.com>
 *
 */

int cint1e_loop(double *gctr, const int *ng, const double fac,
                void (*const f_gout)(),
                const int *shls, const int *atm, const int *bas, const double *env);

int cint1e_nuc_loop(double *gctr, const int *ng, const double fac,
                void (*const f_gout)(), const int nuc_id,
                const int *shls, const int *atm, const int *bas, const double *env);

int cint1e_drv(double *opij, int *ng, const double fac,
               void (*const f_gout)(), void (*const f_c2s)(),
               const int *shls, const int *atm, const int natm,
               const int *bas, const int nbas, const double *env);

int cint1e_rinv_drv(double *opij, int *ng, const double fac,
                    void (*const f_gout)(), void (*const f_c2s)(),
                    const int *shls, const int *atm, const int natm,
                    const int *bas, const int nbas, const double *env);

int cint1e_nuc_drv(double *opij, int *ng, const double fac,
                   void (*const f_gout)(), void (*const f_c2s)(),
                   const int *shls, const int *atm, const int natm,
                   const int *bas, const int nbas, const double *env);
