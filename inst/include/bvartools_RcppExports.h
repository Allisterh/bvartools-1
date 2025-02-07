// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_bvartools_RCPPEXPORTS_H_GEN_
#define RCPP_bvartools_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace bvartools {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("bvartools", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("bvartools", "_bvartools_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in bvartools");
            }
        }
    }

    inline arma::mat kalman_dk(arma::mat y, arma::mat z, arma::mat sigma_u, arma::mat sigma_v, arma::mat B, arma::vec a_init, arma::mat P_init) {
        typedef SEXP(*Ptr_kalman_dk)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_kalman_dk p_kalman_dk = NULL;
        if (p_kalman_dk == NULL) {
            validateSignature("arma::mat(*kalman_dk)(arma::mat,arma::mat,arma::mat,arma::mat,arma::mat,arma::vec,arma::mat)");
            p_kalman_dk = (Ptr_kalman_dk)R_GetCCallable("bvartools", "_bvartools_kalman_dk");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_kalman_dk(Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(z)), Shield<SEXP>(Rcpp::wrap(sigma_u)), Shield<SEXP>(Rcpp::wrap(sigma_v)), Shield<SEXP>(Rcpp::wrap(B)), Shield<SEXP>(Rcpp::wrap(a_init)), Shield<SEXP>(Rcpp::wrap(P_init)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::vec stoch_vol(arma::vec y, arma::vec h, double sigma, double h_init, double constant) {
        typedef SEXP(*Ptr_stoch_vol)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_stoch_vol p_stoch_vol = NULL;
        if (p_stoch_vol == NULL) {
            validateSignature("arma::vec(*stoch_vol)(arma::vec,arma::vec,double,double,double)");
            p_stoch_vol = (Ptr_stoch_vol)R_GetCCallable("bvartools", "_bvartools_stoch_vol");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_stoch_vol(Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(sigma)), Shield<SEXP>(Rcpp::wrap(h_init)), Shield<SEXP>(Rcpp::wrap(constant)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::vec stochvol_ksc1998(arma::vec y, arma::vec h, double sigma, double h_init, double constant) {
        typedef SEXP(*Ptr_stochvol_ksc1998)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_stochvol_ksc1998 p_stochvol_ksc1998 = NULL;
        if (p_stochvol_ksc1998 == NULL) {
            validateSignature("arma::vec(*stochvol_ksc1998)(arma::vec,arma::vec,double,double,double)");
            p_stochvol_ksc1998 = (Ptr_stochvol_ksc1998)R_GetCCallable("bvartools", "_bvartools_stochvol_ksc1998");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_stochvol_ksc1998(Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(sigma)), Shield<SEXP>(Rcpp::wrap(h_init)), Shield<SEXP>(Rcpp::wrap(constant)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::mat stochvol_ocsn2007(arma::vec y, arma::vec h, double sigma, double h_init, double constant) {
        typedef SEXP(*Ptr_stochvol_ocsn2007)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_stochvol_ocsn2007 p_stochvol_ocsn2007 = NULL;
        if (p_stochvol_ocsn2007 == NULL) {
            validateSignature("arma::mat(*stochvol_ocsn2007)(arma::vec,arma::vec,double,double,double)");
            p_stochvol_ocsn2007 = (Ptr_stochvol_ocsn2007)R_GetCCallable("bvartools", "_bvartools_stochvol_ocsn2007");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_stochvol_ocsn2007(Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(sigma)), Shield<SEXP>(Rcpp::wrap(h_init)), Shield<SEXP>(Rcpp::wrap(constant)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

}

#endif // RCPP_bvartools_RCPPEXPORTS_H_GEN_
