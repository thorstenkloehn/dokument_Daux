## Flask Neue Website erstellen

* http://localhost:3000/hallo Ausgabe Hallo Welt


```

from flask import Flask

app = Flask(__name__)

@app.route("/hallo")   
def hallo():
    return "Hallo Welt"
if __name__ == '__main__': 
    app.run(port=3000)

```