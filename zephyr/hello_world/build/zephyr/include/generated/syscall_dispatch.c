/* auto-generated by gen_syscalls.py, don't edit */

/* Weak handler functions that get replaced by the real ones unless a system
 * call is not implemented due to kernel configuration.
 */

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_zephyr_read_stdin(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_zephyr_write_stdout(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_zephyr_fputc(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_zephyr_fwrite(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh___posix_clock_get_base(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_z_sys_mutex_kernel_lock(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_z_sys_mutex_kernel_unlock(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_z_log_msg_simple_create_0(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_z_log_msg_simple_create_1(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_z_log_msg_simple_create_2(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_z_log_msg_static_create(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_log_panic(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_log_process(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_log_buffered_cnt(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_log_filter_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_log_frontend_filter_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_pin_interrupt_configure(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_pin_configure(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_port_get_direction(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_pin_get_config(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_port_get_raw(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_port_set_masked_raw(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_port_set_bits_raw(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_port_clear_bits_raw(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_port_toggle_bits(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_gpio_get_pending_int(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_err_check(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_poll_in(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_poll_in_u16(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_poll_out(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_poll_out_u16(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_configure(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_config_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_irq_tx_enable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_irq_tx_disable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_irq_rx_enable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_irq_rx_disable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_irq_err_enable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_irq_err_disable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_irq_is_pending(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_irq_update(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_tx(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_tx_u16(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_tx_abort(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_rx_enable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_rx_enable_u16(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_rx_disable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_line_ctrl_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_line_ctrl_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_uart_drv_cmd(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_device_get_binding(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_device_is_ready(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_stack_alloc(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_stack_free(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_create(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_stack_space_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_join(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_sleep(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_usleep(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_busy_wait(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_yield(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_wakeup(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_sched_current_thread_query(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_abort(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_start(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_timeout_expires_ticks(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_timeout_remaining_ticks(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_priority_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_priority_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_deadline_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_suspend(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_resume(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_is_preempt_thread(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_custom_data_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_custom_data_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_name_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_thread_name_copy(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_timer_start(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_timer_stop(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_timer_status_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_timer_status_sync(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_timer_expires_ticks(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_timer_remaining_ticks(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_timer_user_data_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_timer_user_data_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_uptime_ticks(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_queue_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_queue_cancel_wait(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_queue_alloc_append(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_queue_alloc_prepend(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_queue_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_queue_is_empty(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_queue_peek_head(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_queue_peek_tail(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_futex_wait(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_futex_wake(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_event_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_event_post(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_event_set(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_event_set_masked(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_event_clear(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_event_wait(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_event_wait_all(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_stack_alloc_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_stack_push(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_stack_pop(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_mutex_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_mutex_lock(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_mutex_unlock(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_condvar_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_condvar_signal(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_condvar_broadcast(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_condvar_wait(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_sem_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_sem_take(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_sem_give(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_sem_reset(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_sem_count_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_alloc_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_put(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_peek(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_peek_at(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_purge(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_num_free_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_get_attrs(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_msgq_num_used_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_pipe_alloc_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_pipe_put(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_pipe_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_pipe_read_avail(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_pipe_write_avail(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_pipe_flush(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_pipe_buffer_flush(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_poll(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_poll_signal_init(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_poll_signal_reset(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_poll_signal_check(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_poll_signal_raise(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_str_out(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_float_disable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_float_enable(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_k_object_alloc_size(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

__weak ALIAS_OF(handler_no_syscall)
uintptr_t z_mrsh_sys_clock_hw_cycles_per_sec_runtime_get(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3,
         uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);
extern uintptr_t z_mrsh_k_object_release(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);
extern uintptr_t z_mrsh_k_object_access_grant(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);
extern uintptr_t z_mrsh_k_object_alloc(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, void *ssf);

const _k_syscall_handler_t _k_syscall_table[K_SYSCALL_LIMIT] = {
	[K_SYSCALL_ZEPHYR_READ_STDIN] = z_mrsh_zephyr_read_stdin,
	[K_SYSCALL_ZEPHYR_WRITE_STDOUT] = z_mrsh_zephyr_write_stdout,
	[K_SYSCALL_ZEPHYR_FPUTC] = z_mrsh_zephyr_fputc,
	[K_SYSCALL_ZEPHYR_FWRITE] = z_mrsh_zephyr_fwrite,
	[K_SYSCALL___POSIX_CLOCK_GET_BASE] = z_mrsh___posix_clock_get_base,
	[K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK] = z_mrsh_z_sys_mutex_kernel_lock,
	[K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK] = z_mrsh_z_sys_mutex_kernel_unlock,
	[K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0] = z_mrsh_z_log_msg_simple_create_0,
	[K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1] = z_mrsh_z_log_msg_simple_create_1,
	[K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2] = z_mrsh_z_log_msg_simple_create_2,
	[K_SYSCALL_Z_LOG_MSG_STATIC_CREATE] = z_mrsh_z_log_msg_static_create,
	[K_SYSCALL_LOG_PANIC] = z_mrsh_log_panic,
	[K_SYSCALL_LOG_PROCESS] = z_mrsh_log_process,
	[K_SYSCALL_LOG_BUFFERED_CNT] = z_mrsh_log_buffered_cnt,
	[K_SYSCALL_LOG_FILTER_SET] = z_mrsh_log_filter_set,
	[K_SYSCALL_LOG_FRONTEND_FILTER_SET] = z_mrsh_log_frontend_filter_set,
	[K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE] = z_mrsh_gpio_pin_interrupt_configure,
	[K_SYSCALL_GPIO_PIN_CONFIGURE] = z_mrsh_gpio_pin_configure,
	[K_SYSCALL_GPIO_PORT_GET_DIRECTION] = z_mrsh_gpio_port_get_direction,
	[K_SYSCALL_GPIO_PIN_GET_CONFIG] = z_mrsh_gpio_pin_get_config,
	[K_SYSCALL_GPIO_PORT_GET_RAW] = z_mrsh_gpio_port_get_raw,
	[K_SYSCALL_GPIO_PORT_SET_MASKED_RAW] = z_mrsh_gpio_port_set_masked_raw,
	[K_SYSCALL_GPIO_PORT_SET_BITS_RAW] = z_mrsh_gpio_port_set_bits_raw,
	[K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW] = z_mrsh_gpio_port_clear_bits_raw,
	[K_SYSCALL_GPIO_PORT_TOGGLE_BITS] = z_mrsh_gpio_port_toggle_bits,
	[K_SYSCALL_GPIO_GET_PENDING_INT] = z_mrsh_gpio_get_pending_int,
	[K_SYSCALL_UART_ERR_CHECK] = z_mrsh_uart_err_check,
	[K_SYSCALL_UART_POLL_IN] = z_mrsh_uart_poll_in,
	[K_SYSCALL_UART_POLL_IN_U16] = z_mrsh_uart_poll_in_u16,
	[K_SYSCALL_UART_POLL_OUT] = z_mrsh_uart_poll_out,
	[K_SYSCALL_UART_POLL_OUT_U16] = z_mrsh_uart_poll_out_u16,
	[K_SYSCALL_UART_CONFIGURE] = z_mrsh_uart_configure,
	[K_SYSCALL_UART_CONFIG_GET] = z_mrsh_uart_config_get,
	[K_SYSCALL_UART_IRQ_TX_ENABLE] = z_mrsh_uart_irq_tx_enable,
	[K_SYSCALL_UART_IRQ_TX_DISABLE] = z_mrsh_uart_irq_tx_disable,
	[K_SYSCALL_UART_IRQ_RX_ENABLE] = z_mrsh_uart_irq_rx_enable,
	[K_SYSCALL_UART_IRQ_RX_DISABLE] = z_mrsh_uart_irq_rx_disable,
	[K_SYSCALL_UART_IRQ_ERR_ENABLE] = z_mrsh_uart_irq_err_enable,
	[K_SYSCALL_UART_IRQ_ERR_DISABLE] = z_mrsh_uart_irq_err_disable,
	[K_SYSCALL_UART_IRQ_IS_PENDING] = z_mrsh_uart_irq_is_pending,
	[K_SYSCALL_UART_IRQ_UPDATE] = z_mrsh_uart_irq_update,
	[K_SYSCALL_UART_TX] = z_mrsh_uart_tx,
	[K_SYSCALL_UART_TX_U16] = z_mrsh_uart_tx_u16,
	[K_SYSCALL_UART_TX_ABORT] = z_mrsh_uart_tx_abort,
	[K_SYSCALL_UART_RX_ENABLE] = z_mrsh_uart_rx_enable,
	[K_SYSCALL_UART_RX_ENABLE_U16] = z_mrsh_uart_rx_enable_u16,
	[K_SYSCALL_UART_RX_DISABLE] = z_mrsh_uart_rx_disable,
	[K_SYSCALL_UART_LINE_CTRL_SET] = z_mrsh_uart_line_ctrl_set,
	[K_SYSCALL_UART_LINE_CTRL_GET] = z_mrsh_uart_line_ctrl_get,
	[K_SYSCALL_UART_DRV_CMD] = z_mrsh_uart_drv_cmd,
	[K_SYSCALL_DEVICE_GET_BINDING] = z_mrsh_device_get_binding,
	[K_SYSCALL_DEVICE_IS_READY] = z_mrsh_device_is_ready,
	[K_SYSCALL_K_THREAD_STACK_ALLOC] = z_mrsh_k_thread_stack_alloc,
	[K_SYSCALL_K_THREAD_STACK_FREE] = z_mrsh_k_thread_stack_free,
	[K_SYSCALL_K_THREAD_CREATE] = z_mrsh_k_thread_create,
	[K_SYSCALL_K_THREAD_STACK_SPACE_GET] = z_mrsh_k_thread_stack_space_get,
	[K_SYSCALL_K_THREAD_JOIN] = z_mrsh_k_thread_join,
	[K_SYSCALL_K_SLEEP] = z_mrsh_k_sleep,
	[K_SYSCALL_K_USLEEP] = z_mrsh_k_usleep,
	[K_SYSCALL_K_BUSY_WAIT] = z_mrsh_k_busy_wait,
	[K_SYSCALL_K_YIELD] = z_mrsh_k_yield,
	[K_SYSCALL_K_WAKEUP] = z_mrsh_k_wakeup,
	[K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY] = z_mrsh_k_sched_current_thread_query,
	[K_SYSCALL_K_THREAD_ABORT] = z_mrsh_k_thread_abort,
	[K_SYSCALL_K_THREAD_START] = z_mrsh_k_thread_start,
	[K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS] = z_mrsh_k_thread_timeout_expires_ticks,
	[K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS] = z_mrsh_k_thread_timeout_remaining_ticks,
	[K_SYSCALL_K_THREAD_PRIORITY_GET] = z_mrsh_k_thread_priority_get,
	[K_SYSCALL_K_THREAD_PRIORITY_SET] = z_mrsh_k_thread_priority_set,
	[K_SYSCALL_K_THREAD_DEADLINE_SET] = z_mrsh_k_thread_deadline_set,
	[K_SYSCALL_K_THREAD_SUSPEND] = z_mrsh_k_thread_suspend,
	[K_SYSCALL_K_THREAD_RESUME] = z_mrsh_k_thread_resume,
	[K_SYSCALL_K_IS_PREEMPT_THREAD] = z_mrsh_k_is_preempt_thread,
	[K_SYSCALL_K_THREAD_CUSTOM_DATA_SET] = z_mrsh_k_thread_custom_data_set,
	[K_SYSCALL_K_THREAD_CUSTOM_DATA_GET] = z_mrsh_k_thread_custom_data_get,
	[K_SYSCALL_K_THREAD_NAME_SET] = z_mrsh_k_thread_name_set,
	[K_SYSCALL_K_THREAD_NAME_COPY] = z_mrsh_k_thread_name_copy,
	[K_SYSCALL_K_TIMER_START] = z_mrsh_k_timer_start,
	[K_SYSCALL_K_TIMER_STOP] = z_mrsh_k_timer_stop,
	[K_SYSCALL_K_TIMER_STATUS_GET] = z_mrsh_k_timer_status_get,
	[K_SYSCALL_K_TIMER_STATUS_SYNC] = z_mrsh_k_timer_status_sync,
	[K_SYSCALL_K_TIMER_EXPIRES_TICKS] = z_mrsh_k_timer_expires_ticks,
	[K_SYSCALL_K_TIMER_REMAINING_TICKS] = z_mrsh_k_timer_remaining_ticks,
	[K_SYSCALL_K_TIMER_USER_DATA_SET] = z_mrsh_k_timer_user_data_set,
	[K_SYSCALL_K_TIMER_USER_DATA_GET] = z_mrsh_k_timer_user_data_get,
	[K_SYSCALL_K_UPTIME_TICKS] = z_mrsh_k_uptime_ticks,
	[K_SYSCALL_K_QUEUE_INIT] = z_mrsh_k_queue_init,
	[K_SYSCALL_K_QUEUE_CANCEL_WAIT] = z_mrsh_k_queue_cancel_wait,
	[K_SYSCALL_K_QUEUE_ALLOC_APPEND] = z_mrsh_k_queue_alloc_append,
	[K_SYSCALL_K_QUEUE_ALLOC_PREPEND] = z_mrsh_k_queue_alloc_prepend,
	[K_SYSCALL_K_QUEUE_GET] = z_mrsh_k_queue_get,
	[K_SYSCALL_K_QUEUE_IS_EMPTY] = z_mrsh_k_queue_is_empty,
	[K_SYSCALL_K_QUEUE_PEEK_HEAD] = z_mrsh_k_queue_peek_head,
	[K_SYSCALL_K_QUEUE_PEEK_TAIL] = z_mrsh_k_queue_peek_tail,
	[K_SYSCALL_K_FUTEX_WAIT] = z_mrsh_k_futex_wait,
	[K_SYSCALL_K_FUTEX_WAKE] = z_mrsh_k_futex_wake,
	[K_SYSCALL_K_EVENT_INIT] = z_mrsh_k_event_init,
	[K_SYSCALL_K_EVENT_POST] = z_mrsh_k_event_post,
	[K_SYSCALL_K_EVENT_SET] = z_mrsh_k_event_set,
	[K_SYSCALL_K_EVENT_SET_MASKED] = z_mrsh_k_event_set_masked,
	[K_SYSCALL_K_EVENT_CLEAR] = z_mrsh_k_event_clear,
	[K_SYSCALL_K_EVENT_WAIT] = z_mrsh_k_event_wait,
	[K_SYSCALL_K_EVENT_WAIT_ALL] = z_mrsh_k_event_wait_all,
	[K_SYSCALL_K_STACK_ALLOC_INIT] = z_mrsh_k_stack_alloc_init,
	[K_SYSCALL_K_STACK_PUSH] = z_mrsh_k_stack_push,
	[K_SYSCALL_K_STACK_POP] = z_mrsh_k_stack_pop,
	[K_SYSCALL_K_MUTEX_INIT] = z_mrsh_k_mutex_init,
	[K_SYSCALL_K_MUTEX_LOCK] = z_mrsh_k_mutex_lock,
	[K_SYSCALL_K_MUTEX_UNLOCK] = z_mrsh_k_mutex_unlock,
	[K_SYSCALL_K_CONDVAR_INIT] = z_mrsh_k_condvar_init,
	[K_SYSCALL_K_CONDVAR_SIGNAL] = z_mrsh_k_condvar_signal,
	[K_SYSCALL_K_CONDVAR_BROADCAST] = z_mrsh_k_condvar_broadcast,
	[K_SYSCALL_K_CONDVAR_WAIT] = z_mrsh_k_condvar_wait,
	[K_SYSCALL_K_SEM_INIT] = z_mrsh_k_sem_init,
	[K_SYSCALL_K_SEM_TAKE] = z_mrsh_k_sem_take,
	[K_SYSCALL_K_SEM_GIVE] = z_mrsh_k_sem_give,
	[K_SYSCALL_K_SEM_RESET] = z_mrsh_k_sem_reset,
	[K_SYSCALL_K_SEM_COUNT_GET] = z_mrsh_k_sem_count_get,
	[K_SYSCALL_K_MSGQ_ALLOC_INIT] = z_mrsh_k_msgq_alloc_init,
	[K_SYSCALL_K_MSGQ_PUT] = z_mrsh_k_msgq_put,
	[K_SYSCALL_K_MSGQ_GET] = z_mrsh_k_msgq_get,
	[K_SYSCALL_K_MSGQ_PEEK] = z_mrsh_k_msgq_peek,
	[K_SYSCALL_K_MSGQ_PEEK_AT] = z_mrsh_k_msgq_peek_at,
	[K_SYSCALL_K_MSGQ_PURGE] = z_mrsh_k_msgq_purge,
	[K_SYSCALL_K_MSGQ_NUM_FREE_GET] = z_mrsh_k_msgq_num_free_get,
	[K_SYSCALL_K_MSGQ_GET_ATTRS] = z_mrsh_k_msgq_get_attrs,
	[K_SYSCALL_K_MSGQ_NUM_USED_GET] = z_mrsh_k_msgq_num_used_get,
	[K_SYSCALL_K_PIPE_ALLOC_INIT] = z_mrsh_k_pipe_alloc_init,
	[K_SYSCALL_K_PIPE_PUT] = z_mrsh_k_pipe_put,
	[K_SYSCALL_K_PIPE_GET] = z_mrsh_k_pipe_get,
	[K_SYSCALL_K_PIPE_READ_AVAIL] = z_mrsh_k_pipe_read_avail,
	[K_SYSCALL_K_PIPE_WRITE_AVAIL] = z_mrsh_k_pipe_write_avail,
	[K_SYSCALL_K_PIPE_FLUSH] = z_mrsh_k_pipe_flush,
	[K_SYSCALL_K_PIPE_BUFFER_FLUSH] = z_mrsh_k_pipe_buffer_flush,
	[K_SYSCALL_K_POLL] = z_mrsh_k_poll,
	[K_SYSCALL_K_POLL_SIGNAL_INIT] = z_mrsh_k_poll_signal_init,
	[K_SYSCALL_K_POLL_SIGNAL_RESET] = z_mrsh_k_poll_signal_reset,
	[K_SYSCALL_K_POLL_SIGNAL_CHECK] = z_mrsh_k_poll_signal_check,
	[K_SYSCALL_K_POLL_SIGNAL_RAISE] = z_mrsh_k_poll_signal_raise,
	[K_SYSCALL_K_STR_OUT] = z_mrsh_k_str_out,
	[K_SYSCALL_K_FLOAT_DISABLE] = z_mrsh_k_float_disable,
	[K_SYSCALL_K_FLOAT_ENABLE] = z_mrsh_k_float_enable,
	[K_SYSCALL_K_OBJECT_ACCESS_GRANT] = z_mrsh_k_object_access_grant,
	[K_SYSCALL_K_OBJECT_RELEASE] = z_mrsh_k_object_release,
	[K_SYSCALL_K_OBJECT_ALLOC] = z_mrsh_k_object_alloc,
	[K_SYSCALL_K_OBJECT_ALLOC_SIZE] = z_mrsh_k_object_alloc_size,
	[K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET] = z_mrsh_sys_clock_hw_cycles_per_sec_runtime_get,
	[K_SYSCALL_BAD] = handler_bad_syscall
};
