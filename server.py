from flask import Flask, request, render_template
import json
app = Flask(__name__)

data = {}

@app.route('/')
def hello_world():
    return render_template('index.html')


@app.route('/data')
def data_route():
    return json.dumps(data)

@app.route('/upload', methods=['POST'])
def upload():
    name = request.form.get('name')
    value = request.form.get('value')
    data[name] = value
    return 'Set {} to {}'.format(name, value)

if __name__ == '__main__':
    app.run(debug=True, port=5000)