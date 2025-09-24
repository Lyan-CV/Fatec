<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulario</title>
</head>
<body>
    <div>
        <h1>Cadastro de Cliente</h1>
        <form action="action-cadastro.php" method="">
            <p>
                <label for="TxtNome">Nome</label>
                <input type="text" id="idNome" name="txtNome">
            </p>
            
            <p>
                <label for="intIdade">Idade</label>
                <input type="number" id="Idade" name="txtIdade">
            </p>
            <p>
                <label for="sexo">Sexo</label>
                <input type="radio" name="sexo">Masulino
                <input type="radio" name="sexo">Feminino
            </p>
            <p>
                <input type="submit" value="Enviar">
            </p>
        </form>

    </div>
</body>
</html>