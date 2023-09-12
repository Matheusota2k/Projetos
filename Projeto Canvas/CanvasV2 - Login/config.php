<?php 

   // CONECTANDO COM O BANCO DE DADOS
    $dbname = "test"; // nome do banco de dados
	$dbhost = "localhost"; // local onde está o banco de dados
	$dbuser = "root"; // nome do usuário do bando de dados
    $dbpass = ""; // senha do usuário do bando de dados

	$pdo = new PDO("mysql:dbname=".$dbname.";host:".$dbhost."", "".$dbuser."", $dbpass);
	
	$pdo = new PDO("mysql:host=192.168.0.10; dbname=erp_database", "db_admin", "Abcd1234");

	$email = $_REQUEST['email'];
		
	// INSERINDO DADOS NO BANCO DE DADOS
	$pdo->query("INSERT INTO `cadastro` (email) VALUES ('$email')"); 

	//echo "Dados Salvos com sucesso";
		
	// mysqli_close();
	
?> 



?>