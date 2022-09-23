<?php

$nome =$_POST["nome"];
$cpf = $_POST["cpf"];
$email = $_POST["email"];
$cidade = $_POST["cidade"];

$android = $_POST["android"];
$python = $_POST["python"];
$html_css = $_POST["html_css"];
$js = $_POST["js"];


$faixa = $_POST["faixa"];

echo $nome . " " . $cpf . " " . $email . " " . $cidade . " " . $android . " " . $python . " " . $html_css . " " . $js . " " . $faixa;

?>