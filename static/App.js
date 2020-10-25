var renderHTML = function(tplId, dict) {
    var tpl = document.querySelector("script#" + tplId);
    var html = tpl.innerHTML;
    for (var key in dict) {
        html = html.replace(new RegExp("\\{" + key + "\\}", "g"), dict[key]);
    }
    return html;
};

var get_emoji = function(val) {
    // ['FURIOUS', 'SHOCKED', 'ANGRY', 'FROWN', 'MEH', 'SMILE', 'AMAZED']
    if (val == "FURIOUS") {
        return "😡";
    } else if (val == "SHOCKED") {
        return "😲";
    } else if (val == "ANGRY") {
        return "😠";
    } else if (val == "FROWN") {
        return "🙁";
    } else if (val == "MEH") {
        return "😐";
    } else if (val == "SMILE") {
        return "🙂";
    } else if (val == "AMAZED") {
        return "🤩";
    }
}

var title_case = function(n) {
    if (n.length <= 1) return n;
    return n.substring(0, 1).toUpperCase() + n.substring(1);
}

var updateFriendos = function() {
    fetch('/data')
        .then(data => data.json())
        .then(data => {
            if (!data) return;
            var entries = Object.entries(data);
            if (entries.length == 0) {
                document.querySelector("#friendos").innerHTML = '<div class="card text-center" style="width: 18rem;"><h3 class="card-body">No friendos yet 🙁</h3></div>';
                return;
            }
            document.querySelector("#friendos").innerHTML = "";
            for (var i=0; i<entries.length; i++) {
                var item = entries[i];
                console.info('data:', item);
                
                var html = renderHTML("friendo", {
                    "name": title_case(item[0]),
                    "value": item[1],
                    "emoji": get_emoji(item[1])
                });
                document.querySelector("#friendos").innerHTML += html;
            }
        })
};

window.onload = function() {
    updateFriendos();
    setInterval(updateFriendos, 1000);
}