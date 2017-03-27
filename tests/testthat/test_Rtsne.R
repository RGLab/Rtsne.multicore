# context("Rtsne main function")
# 
# # Prepare iris dataset
# iris_unique <- unique(iris) # Remove duplicates
# Xscale <- scale(as.matrix(iris_unique[,1:4]), 
#                 center = TRUE, scale=FALSE)
# Xscale <- scale(Xscale,
#                 center=FALSE, 
#                 scale=rep(1/max(Xscale),4))
# distmat <- as.matrix(dist(Xscale))
# 
# # Run models to compare to
# set.seed(50)
# tsne_out_matrix <- Rtsne(as.matrix(iris_unique[,1:4]),theta=0.0,max_iter=200,pca=FALSE)
# set.seed(50)
# tsne_out_matrix_bh <- Rtsne(as.matrix(iris_unique[,1:4]),verbose=FALSE, is_distance = FALSE,theta=0.1,pca=FALSE,max_iter=200)
# 
# test_that("Manual distance calculation equals C++ distance calculation", {
#   
#   # Exact
#   # Note: only the same in the first few iterations
#   set.seed(50)
#   tsne_matrix <- Rtsne(as.matrix(iris_unique[,1:4]),theta=0.0,max_iter=10,pca=FALSE)
#   set.seed(50)
#   tsne_dist <- Rtsne(distmat,theta = 0.0,max_iter=10)
#   expect_equal(tsne_matrix$Y,tsne_dist$Y,tolerance=10e-5)
#   
#   # Inexact
#   set.seed(50)
#   tsne_matrix <- Rtsne(as.matrix(iris_unique[,1:4]),verbose=FALSE, is_distance = FALSE,theta=0.1,max_iter=10,pca=FALSE)
#   
#   set.seed(50)
#   tsne_dist <- Rtsne(distmat,theta = 0.1,max_iter=10)
#   expect_equal(tsne_matrix$Y,tsne_dist$Y,tolerance=10e-5)
# })
# 
# 
# test_that("Accepts data.frame", {
#   #Exact
#   set.seed(50)
#   tsne_out_df <- Rtsne(iris_unique[,1:4],theta=0.0,pca=FALSE,max_iter=200)
#   expect_equal(tsne_out_matrix$Y,tsne_out_df$Y)
#   
#   #Inexact
#   set.seed(50)
#   tsne_out_df <- Rtsne(iris_unique[,1:4],theta=0.1,pca=FALSE,max_iter=200)
#   expect_equal(tsne_out_matrix_bh$Y,tsne_out_df$Y)
# })
