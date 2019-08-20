# bvartools 0.0.2

* Updated vignette `ssvs` after the introduction of function `ssvs_prior`.
* Added `ssvs_prior` for the calculation of prior matrices for the SSVS algorithm.
* Added `minnesota_prior` for the calculation of the Minnesota prior.
* Use unsigned integers for indices in Cpp code to address warnings during installation.
* Better error handling in `irf`.
* In `post_coint_kls_sur` the prior matrix `g_i` can be time varying.
* `bvar` and `predict` also work only with deterministic terms, i.e. p can be zero.
* Use SVD to obtain a draw of beta in `post_coint_kls` and `post_coint_kls_sur`.
* `predict` allows for p = 1.
* Add legend to `plot.bvarfevd`.

# bvartools 0.0.1

* Initial release