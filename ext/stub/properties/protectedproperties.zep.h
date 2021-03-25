
extern zend_class_entry *stub_properties_protectedproperties_ce;

ZEPHIR_INIT_CLASS(Stub_Properties_ProtectedProperties);

PHP_METHOD(Stub_Properties_ProtectedProperties, setSomeVar);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeVar);
PHP_METHOD(Stub_Properties_ProtectedProperties, setSomeArrayVar);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeArrayVar);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeNull);
PHP_METHOD(Stub_Properties_ProtectedProperties, setSomeNull);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeNullInitial);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeFalse);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeTrue);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeInteger);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeDouble);
PHP_METHOD(Stub_Properties_ProtectedProperties, getSomeString);
zend_object *zephir_init_properties_Stub_Properties_ProtectedProperties(zend_class_entry *class_type);

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_setsomevar, 0, 0, 1)
	ZEND_ARG_INFO(0, someVar)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_getsomevar, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_setsomearrayvar, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, someArrayVar, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stub_properties_protectedproperties_getsomearrayvar, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_getsomenull, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_setsomenull, 0, 0, 1)
	ZEND_ARG_INFO(0, param)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_getsomenullinitial, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_getsomefalse, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_getsometrue, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_getsomeinteger, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_getsomedouble, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_getsomestring, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_protectedproperties_zephir_init_properties_stub_properties_protectedproperties, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(stub_properties_protectedproperties_method_entry) {
	PHP_ME(Stub_Properties_ProtectedProperties, setSomeVar, arginfo_stub_properties_protectedproperties_setsomevar, ZEND_ACC_PUBLIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeVar, arginfo_stub_properties_protectedproperties_getsomevar, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeVar, NULL, ZEND_ACC_PUBLIC)
#endif
	PHP_ME(Stub_Properties_ProtectedProperties, setSomeArrayVar, arginfo_stub_properties_protectedproperties_setsomearrayvar, ZEND_ACC_PUBLIC)
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeArrayVar, arginfo_stub_properties_protectedproperties_getsomearrayvar, ZEND_ACC_PUBLIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeNull, arginfo_stub_properties_protectedproperties_getsomenull, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeNull, NULL, ZEND_ACC_PUBLIC)
#endif
	PHP_ME(Stub_Properties_ProtectedProperties, setSomeNull, arginfo_stub_properties_protectedproperties_setsomenull, ZEND_ACC_PUBLIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeNullInitial, arginfo_stub_properties_protectedproperties_getsomenullinitial, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeNullInitial, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeFalse, arginfo_stub_properties_protectedproperties_getsomefalse, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeFalse, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeTrue, arginfo_stub_properties_protectedproperties_getsometrue, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeTrue, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeInteger, arginfo_stub_properties_protectedproperties_getsomeinteger, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeInteger, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeDouble, arginfo_stub_properties_protectedproperties_getsomedouble, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeDouble, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeString, arginfo_stub_properties_protectedproperties_getsomestring, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_ProtectedProperties, getSomeString, NULL, ZEND_ACC_PUBLIC)
#endif
	PHP_FE_END
};
