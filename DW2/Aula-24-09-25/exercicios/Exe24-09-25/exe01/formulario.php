<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cadastro de Funcionário</title>
</head>
<body>
    <form action="action_formulario.php" method="get">
        <div class="tittle">
            <h1>Cadastro</h1>
        </div>
        <p>
            <label for="lblNome">Nome</label>
            <input type="text" id="idnome" name="txtNome">
        </p>
        <p>
            <label for="lblsobreNome">Sobrenome</label>
            <input type="text" id="idsobrenome" name="txtsobreNome">
        </p>
        <p>
            <label for="lblIdade">Idade</label>
            <input type="number" id="ididade" name="txtidade" min=18>
        </p>

        <p>
            <label for="lblProfissao">Escolha sua profissao</label>
            <select name="profissoes" id="slctProfissoes">
                <option value="Atendente">Atendente</option>
                <option value="Lider de Plantão">Lider de Plantão</option>
                <option value="Lider de Unidade">Lider de Unidade</option>
            </select>
        </p>
        
        <p>
            <label for="lblSalario">Salário</label>
            <input type="number" id="idSalario" name="txtSalario" min="1200">
        </p>

        <p>
            <button type="submit" value="Enviar">Enviar</button>
        </p>
    </form>
</body>
</html>