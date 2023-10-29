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

namespace Zephir\Test\Class;

use PHPUnit\Framework\TestCase;
use Zephir\Class\Entry;

final class EntryTest extends TestCase
{
    public function testShouldEscapeClassName(): void
    {
        $classname = '\Bar\Foo';
        $this->assertSame(
            Entry::escape($classname),
            '\\\\Bar\\\\Foo'
        );
    }
}
