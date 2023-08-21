
static bool trans_ggu(DisasContext *ctx, arg_ecall *a)
{
    generate_exception(ctx, RISCV_EXCP_GGU);
    return true;
}