<?php

/**
 * This file is part of the Zephir.
 *
 * (c) Phalcon Team <team@zephir-lang.com>
 *
 * For the full copyright and license information, please view
 * the LICENSE file that was distributed with this source code.
 */

declare(strict_types=1);

namespace Zephir\Exception;

use Exception;
use Throwable;
use Zephir\CompiledExpression;
use Zephir\Variable\Variable;

/**
 * Exceptions generated by the compiler
 */
class CompilerException extends RuntimeException
{
    /**
     * CompilerException constructor.
     *
     * @param string                   $message  the Exception message to throw [optional]
     * @param array                    $extra    extra info [optional]
     * @param int                      $code     the Exception code [optional]
     * @param Throwable|null           $previous the previous throwable used for the exception chaining [optional]
     */
    public function __construct(
        string $message = '',
        array $extra = [],
        int $code = 0,
        ?Throwable $previous = null,
    ) {
        if (isset($extra['file'])) {
            $message .= ' in ' . $extra['file'] . ' on line ' . $extra['line'];
        }

        $this->extra = $extra;

        parent::__construct($message, $code, $previous);
    }

    /**
     * Cannot use variable type as array
     *
     * @param string                   $type     the variable type
     * @param array                    $extra    extra info [optional]
     * @param int                      $code     the Exception code [optional]
     * @param Throwable|null $previous the previous throwable used for the exception chaining [optional]
     *
     * @return self
     */
    public static function cannotUseAsArray(
        string $type,
        array $extra = [],
        int $code = 0,
        ?Throwable $previous = null,
    ): self {
        return new self(
            "Cannot use variable type: '" . $type . "' as array",
            $extra,
            $code,
            $previous
        );
    }

    /**
     * Cannot use non-initialized variable as an object
     *
     * @param array                    $extra    extra info [optional]
     * @param int                      $code     the Exception code [optional]
     * @param Throwable|null           $previous the previous throwable used for the exception chaining [optional]
     *
     * @return self
     */
    public static function cannotUseNonInitializedVariableAsObject(
        array $extra = [],
        int $code = 0,
        ?Throwable $previous = null,
    ): self {
        return new self(
            'Cannot use non-initialized variable as an object',
            $extra,
            $code,
            $previous
        );
    }

    /**
     * Cannot use non-initialized variable as an object
     *
     * @param array|null               $extra    extra info [optional]
     * @param int                      $code     the Exception code [optional]
     * @param Exception|Throwable|null $previous the previous throwable used for the exception chaining [optional]
     *
     * @return self
     */
    public static function cannotUseValueTypeAs(
        Variable $variable,
        string $asType,
        ?array $extra = null,
        int $code = 0,
        ?Throwable $previous = null,
    ): self {
        return new self(
            'Cannot use value type: ' . $variable->getType() . ' as ' . $asType,
            $extra,
            $code,
            $previous
        );
    }

    /**
     * Cannot use non-initialized variable as an object
     *
     * @param array|null               $extra    extra info [optional]
     * @param int                      $code     the Exception code [optional]
     * @param Throwable|null           $previous the previous throwable used for the exception chaining [optional]
     *
     * @return self
     */
    public static function cannotUseVariableTypeAs(
        Variable $variable,
        string $asType,
        ?array $extra = null,
        int $code = 0,
        ?Throwable $previous = null,
    ): self {
        return new self(
            'Cannot use variable type: ' . $variable->getType() . ' ' . $asType,
            $extra,
            $code,
            $previous
        );
    }

    /**
     * Class does not have a property called
     *
     * @param string                   $className
     * @param string                   $property
     * @param array|null               $extra
     * @param int                      $code
     * @param Throwable|null           $previous
     *
     * @return self
     */
    public static function classDoesNotHaveProperty(
        string $className,
        string $property,
        ?array $extra = null,
        int $code = 0,
        ?Throwable $previous = null,
    ): self {
        return new self(
            "Class '"
            . $className
            . "' does not have a property called: '" . $property . "'",
            $extra,
            $code,
            $previous
        );
    }

    /**
     * @param string $operator
     * @param string $dataType
     * @param array  $statement
     *
     * @return self
     */
    public static function illegalOperationTypeOnStaticVariable(
        string $operator,
        string $dataType,
        array $statement,
    ): self {
        return new self(
            "Operator '$operator' isn't supported for static variables and $dataType typed expressions",
            $statement
        );
    }

    /**
     * Returned Values can only be assigned to variant variables
     *
     * @param array|null               $extra    extra info [optional]
     * @param int                      $code     the Exception code [optional]
     * @param Throwable|null $previous the previous throwable used for the exception chaining [optional]
     *
     * @return self
     */
    public static function returnValuesVariantVars(
        ?array $extra = null,
        int $code = 0,
        ?Throwable $previous = null,
    ): self {
        return new self(
            'Returned values by functions can only be assigned to variant variables',
            $extra,
            $code,
            $previous
        );
    }

    /**
     * Unknown variable type
     *
     * @param array|null               $extra
     * @param int                      $code
     * @param Throwable|null $previous
     *
     * @return self
     */
    public static function unknownType(
        Variable $variable,
        ?array $extra = null,
        int $code = 0,
        ?Throwable $previous = null,
    ): self {
        return new self(
            "Unknown '" . $variable->getType() . "'",
            $extra,
            $code,
            $previous
        );
    }

    /**
     * Unsupported Type
     *
     * @param CompiledExpression       $expression
     * @param array|null               $extra
     * @param int                      $code
     * @param Throwable|null           $previous
     *
     * @return self
     */
    public static function unsupportedType(
        CompiledExpression $expression,
        ?array $extra = null,
        int $code = 0,
        ?Throwable $previous = null,
    ): self {
        return new self(
            'Unsupported type: ' . $expression->getType(),
            $extra,
            $code,
            $previous
        );
    }
}
