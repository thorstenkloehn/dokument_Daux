## Express Installieren

```
d:
mkdir express
cd express
npm init
npm install express
```

## Express Index.js

```
const express= require("express");

const app = express();
app.all("/",(req,res) =>{

    res.send("Hallo Welt");
    });
    app.listen(3000)
         console.log("http://localhost:3000");
         
 ```