gitignore serve para evitar que aparecam arquivos para publico
para usar esta predifinicao basta criar um ficheiro de texto no vim da seguinte forma

$vim .gitignore    #quem usa macbook quer ocultar os ficheiros .json
                    basta dentro do ficheiro de text colocar  "*.json"
			ou outra extensao de ficheiros "*.exe"
depois basta guradar o ficheiro salvar as alteracoes no vim  " :wq"
muito util para nao aparecer os ficheiros desnecessarios de compilacao, quando estamos a
publicar um projeto programa no github


gitstash    depois de adicionar um commit e ainda nao esta terminado o trabalho 
            depois de criado um documento com o vim.
            o ultimo documento commit
$git stach     #vai dar um status a este commit de " WIP"   work in progress
                significa que ainda vamos voltar a este documento pois o mesmo ainda nao
                 esta terminado
$git stach apply   #chama novamente o documento que tinhamos adiado para agora
                    ser possivel terminar o mesmo
$git stach list
$git stach clear   #limpa todas as modificacoes de commit que guardamos antes pois ja nao 
		     sao necessarias para fazer branch

