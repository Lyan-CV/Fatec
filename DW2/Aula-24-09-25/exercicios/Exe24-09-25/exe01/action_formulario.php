<?php

    $nome = $_GET['txtNome'];
    $sobrenome = $_GET['txtsobreNome'];
    $idade = $_GET['txtidade'];
    $profissao = $_GET['profissoes'];
    $salario = $_GET['txtSalario'];

    echo "Nome do profissional: ".$nome." Sobrenome:".$sobrenome; echo("<br>");
    echo "Idade: ".$idade; echo("<br>");
    echo "Profissão: ".$profissao; echo("<br>");
    echo "Salário: ".$salario."R$";


?>