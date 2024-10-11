<?php

$nota1 = floatval(fgets(STDIN));
$nota2 = floatval(fgets(STDIN));
$pesoA = 3.5;
$pesoB = 7.5;

$media = (($nota1*$pesoA) + ($nota2*$pesoB)) / 11;

echo "MEDIA = " . number_format($media, 5, '.', '') . "\n";

?>
