
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(stub_11__closure)
{
	ZEPHIR_REGISTER_CLASS(stub, 11__closure, stub, 11__closure, stub_11__closure_method_entry, ZEND_ACC_FINAL_CLASS);

	return SUCCESS;
}

PHP_METHOD(stub_11__closure, __invoke)
{
	zval *x, x_sub;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&x_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(x)
	ZEND_PARSE_PARAMETERS_END();


	zephir_fetch_params_without_memory_grow(1, 0, &x);


	mul_function(return_value, x, x);
	return;
}

