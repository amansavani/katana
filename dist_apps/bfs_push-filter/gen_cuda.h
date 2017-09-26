#pragma once
#include "galois/runtime/Cuda/cuda_mtypes.h"
#include "galois/runtime/DataCommMode.h"
#include "galois/runtime/Cuda/cuda_context_decl.h"

void get_bitset_dist_current_cuda(struct CUDA_Context *ctx, unsigned long long int *bitset_compute);
void bitset_dist_current_reset_cuda(struct CUDA_Context *ctx);
void bitset_dist_current_reset_cuda(struct CUDA_Context *ctx, size_t begin, size_t end);
uint32_t get_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned LID);
void set_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned LID, uint32_t v);
void add_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned LID, uint32_t v);
bool min_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned LID, uint32_t v);
void batch_get_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, uint32_t *v);
void batch_get_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t *v_size, DataCommMode *data_mode);
void batch_get_mirror_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, uint32_t *v);
void batch_get_mirror_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t *v_size, DataCommMode *data_mode);
void batch_get_reset_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, uint32_t *v, uint32_t i);
void batch_get_reset_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t *v_size, DataCommMode *data_mode, uint32_t i);
void batch_set_mirror_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t v_size, DataCommMode data_mode);
void batch_set_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t v_size, DataCommMode data_mode);
void batch_add_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t v_size, DataCommMode data_mode);
void batch_min_node_dist_current_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t v_size, DataCommMode data_mode);

void bitset_dist_old_clear_cuda(struct CUDA_Context *ctx);
uint32_t get_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned LID);
void set_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned LID, uint32_t v);
void add_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned LID, uint32_t v);
bool min_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned LID, uint32_t v);
void batch_get_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, uint32_t *v);
void batch_get_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t *v_size, DataCommMode *data_mode);
void batch_get_mirror_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, uint32_t *v);
void batch_get_mirror_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t *v_size, DataCommMode *data_mode);
void batch_get_reset_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, uint32_t *v, uint32_t i);
void batch_get_reset_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t *v_size, DataCommMode *data_mode, uint32_t i);
void batch_set_mirror_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t v_size, DataCommMode data_mode);
void batch_set_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t v_size, DataCommMode data_mode);
void batch_add_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t v_size, DataCommMode data_mode);
void batch_min_node_dist_old_cuda(struct CUDA_Context *ctx, unsigned from_id, unsigned long long int *bitset_comm, unsigned int *offsets, uint32_t *v, size_t v_size, DataCommMode data_mode);

void BFS_cuda(unsigned int __begin, unsigned int __end, int & __retval, struct CUDA_Context *ctx);
void BFS_all_cuda(int & __retval, struct CUDA_Context *ctx);
void FirstItr_BFS_cuda(unsigned int __begin, unsigned int __end, struct CUDA_Context *ctx);
void FirstItr_BFS_all_cuda(struct CUDA_Context *ctx);
void InitializeGraph_cuda(unsigned int __begin, unsigned int __end, const uint32_t & local_infinity, uint64_t local_src_node, struct CUDA_Context *ctx);
void InitializeGraph_all_cuda(const uint32_t & local_infinity, uint64_t local_src_node, struct CUDA_Context *ctx);
