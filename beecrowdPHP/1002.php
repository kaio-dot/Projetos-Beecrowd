<?php

define('VALOR_PI', '3.14159');

$raio = floatval(fgets(STDIN));

$area = VALOR_PI * ($raio*$raio);

echo "A=" . number_format($area, 4, '.', '') . "\n";

?>
