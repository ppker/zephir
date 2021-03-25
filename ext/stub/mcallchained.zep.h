
extern zend_class_entry *stub_mcallchained_ce;

ZEPHIR_INIT_CLASS(Stub_McallChained);

PHP_METHOD(Stub_McallChained, testMethod1);
PHP_METHOD(Stub_McallChained, testMethod2);
PHP_METHOD(Stub_McallChained, testMethod3);
PHP_METHOD(Stub_McallChained, testChained1);
PHP_METHOD(Stub_McallChained, testChained2);
PHP_METHOD(Stub_McallChained, testChained3);
PHP_METHOD(Stub_McallChained, testChained4);

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_mcallchained_testmethod1, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_mcallchained_testmethod2, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_mcallchained_testmethod3, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_mcallchained_testchained1, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_mcallchained_testchained2, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_mcallchained_testchained3, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_mcallchained_testchained4, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(stub_mcallchained_method_entry) {
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_McallChained, testMethod1, arginfo_stub_mcallchained_testmethod1, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_McallChained, testMethod1, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_McallChained, testMethod2, arginfo_stub_mcallchained_testmethod2, ZEND_ACC_PROTECTED)
#else
	PHP_ME(Stub_McallChained, testMethod2, NULL, ZEND_ACC_PROTECTED)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_McallChained, testMethod3, arginfo_stub_mcallchained_testmethod3, ZEND_ACC_PRIVATE)
#else
	PHP_ME(Stub_McallChained, testMethod3, NULL, ZEND_ACC_PRIVATE)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_McallChained, testChained1, arginfo_stub_mcallchained_testchained1, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_McallChained, testChained1, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_McallChained, testChained2, arginfo_stub_mcallchained_testchained2, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_McallChained, testChained2, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_McallChained, testChained3, arginfo_stub_mcallchained_testchained3, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_McallChained, testChained3, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_McallChained, testChained4, arginfo_stub_mcallchained_testchained4, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_McallChained, testChained4, NULL, ZEND_ACC_PUBLIC)
#endif
	PHP_FE_END
};
